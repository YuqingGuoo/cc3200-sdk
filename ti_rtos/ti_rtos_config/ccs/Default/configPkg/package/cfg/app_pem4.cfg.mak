# invoke SourceDir generated makefile for app.pem4
app.pem4: .libraries,app.pem4
.libraries,app.pem4: package/cfg/app_pem4.xdl
	$(MAKE) -f D:\ti\CC3200SDK_1.1.0\cc3200-sdk\ti_rtos\ti_rtos_config/src/makefile.libs

clean::
	$(MAKE) -f D:\ti\CC3200SDK_1.1.0\cc3200-sdk\ti_rtos\ti_rtos_config/src/makefile.libs clean

