all: install # default

install: prepare configure

prepare:
	echo apt-get install python3
	cp myservice.service /lib/systemd/system/

configure:
	systemctl daemon-reload
	systemctl enable myservice

.PHONY: all install prepare configure
