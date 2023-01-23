CC = qcc
SRCS = qdos.c adv00.c adv01.c adv02.c adv03.c adv04.c adv05.c

cave : ${SRCS}
	$(CC) -DCONSOLE=1 -DWINDOWS=0 -DOSX=0 -DUNIX=0 -o cave ${SRCS}

deploy:
	curl -O http://www.dilwyn.me.uk/pe/ptrgen206.zip
	unzip ptrgen206.zip ptr.gen
	curl -O http://www.dilwyn.me.uk/tk/sigext30mod.zip
	unzip sigext30mod.zip sigext30.rext
	qlzip -Q2 Cave.zip cave BOOT sigext30.rext ptr.gen
	qltools Cave.img -fhd Cave 
	qltools Cave.img -w cave BOOT sigext30.rext ptr.gen
	-rm sigext30.rext sigext30mod.zip ptrgen206.zip ptr.gen
