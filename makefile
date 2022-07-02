all: install

install: prepare configure

prepare:
	apt-get install python3
	cp myservice.service /lib/systemd/system/

configure:
	systemctl daemon-reload
	systemctl enable myservice

.PHONY: all install prepare configure
