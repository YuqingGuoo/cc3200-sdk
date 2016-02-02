#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = D:/ti/ccsv6/ccs_base;D:/ti/tirtos_simplelink_2_14_03_28/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_42_03_35/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_02_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_40_03_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_01_34/packages;D:/ti/CC3200SDK_1.1.0/cc3200-sdk/ti_rtos/ti_rtos_config/ccs/.config
override XDCROOT = D:/ti/xdctools_3_31_02_38_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = D:/ti/ccsv6/ccs_base;D:/ti/tirtos_simplelink_2_14_03_28/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_42_03_35/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_02_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_40_03_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_01_34/packages;D:/ti/CC3200SDK_1.1.0/cc3200-sdk/ti_rtos/ti_rtos_config/ccs/.config;D:/ti/xdctools_3_31_02_38_core/packages;..
HOSTOS = Windows
endif
