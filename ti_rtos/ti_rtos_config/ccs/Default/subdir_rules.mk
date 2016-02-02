################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
configPkg/: D:/ti/CC3200SDK_1.1.0/cc3200-sdk/ti_rtos/ti_rtos_config/app.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"D:/ti/xdctools_3_31_02_38_core/xs" --xdcpath="D:/ti/ccsv6/ccs_base;D:/ti/tirtos_simplelink_2_14_03_28/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_42_03_35/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_02_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/bios_6_40_03_39/packages;D:/ti/tirtos_simplelink_2_14_03_28/products/uia_2_00_01_34/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4 -p ti.platforms.simplelink:CC3200 -r release -c "D:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.6" "$<"
	@echo 'Finished building: $<'
	@echo ' '


