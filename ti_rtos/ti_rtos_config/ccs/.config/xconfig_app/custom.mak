## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4 linker.cmd package/cfg/app_pem4.oem4

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/app_pem4.xdl
	$(SED) 's"^\"\(package/cfg/app_pem4cfg.cmd\)\"$""\"D:/ti/CC3200SDK_1.1.0/cc3200-sdk/ti_rtos/ti_rtos_config/ccs/.config/xconfig_app/\1\""' package/cfg/app_pem4.xdl > $@
	-$(SETDATE) -r:max package/cfg/app_pem4.h compiler.opt compiler.opt.defs
