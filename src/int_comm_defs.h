
#ifndef __INT_COMM_DEFS__
#define __INT_COMM_DEFS__

#define BLE_PACKET_SIZE (244)
#define USB_DATA_SIZE (64)

#define COMM_HEADER_SIZE (3)
#define COMM_FOOTER_SIZE (1)
#define OVERHEAD_SIZE (COMM_HEADER_SIZE + COMM_FOOTER_SIZE)
#define UART_PACKET_SIZE (USB_DATA_SIZE + OVERHEAD_SIZE)

#define EOM (0x55)
#define INTERNAL_EVENT (0xA2)
#define EXTERNAL_MESSAGE (0xA1)
#define INTERNAL_MESSAGE (0xA0)

typedef struct {
  uint8_t msg_id;
  uint8_t connected;
  uint8_t advertising;
  uint8_t advertising_whitelist;

  uint8_t peer_count;
  uint8_t reserved[2];
  uint8_t sd_version_number;

  uint16_t sd_company_id;
  uint16_t sd_subversion_number;

  uint32_t app_version;
  uint32_t bld_version;

} event_status_msg_t;

typedef enum {
  INTERNAL_EVENT_STATUS = 0x01,
  INTERNAL_EVENT_SUCCESS = 0x02,
  INTERNAL_EVENT_FAILURE = 0x03,
} InternalEvent_t;

typedef enum {
  INTERNAL_CMD_SEND_STATE = 0x00,
  INTERNAL_CMD_ADVERTISING_ON = 0x01,
  INTERNAL_CMD_ADVERTISING_OFF = 0x02,
  INTERNAL_CMD_ERASE_BONDS = 0x03,
  INTERNAL_CMD_DISCONNECT = 0x04,
  INTERNAL_CMD_ACK = 0x05,
} InternalCmd_t;
#endif
