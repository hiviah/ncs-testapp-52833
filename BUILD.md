## Build in the directory above `testapp`
west -v build -b t3w1_nrf52833 testapp3 -- -Dmcuboot_OVERLAY_CONFIG=/home/ondro/work/satoshilabs/repos/ncs/testapp3/mcuboot.conf

## Picny warning 
        warning: The choice symbol MCUBOOT_BOOTLOADER_MODE_SINGLE_APP (defined at
        modules/Kconfig.mcuboot:149) was selected (set =y), but no symbol ended up as the choice selection.
        See http://docs.zephyrproject.org/latest/kconfig.html#CONFIG_MCUBOOT_BOOTLOADER_MODE_SINGLE_APP
        and/or look up MCUBOOT_BOOTLOADER_MODE_SINGLE_APP in the menuconfig/guiconfig interface. The

