#pragma once
//GUI
class GUIFactory {
public:
	virtual WinFactory* CrearControlW() const = 0;
	virtual MacFactory* CrearControlM() const = 0;
	virtual LinuxFactory* CrearControlL() const = 0;
};
//FACTORYS
class Button : public GUIFactory {
public:
	WinFactory* CrearControlW() const override {
		return new WinButton();
	}
	MacFactory* CrearControlM() const override {
		return new MacButton();
	}
	LinuxFactory* CrearControlL() const override {
		return new LinuxButton();
	}
};
class CheckBox : public GUIFactory {
public:
	WinFactory* CrearControlW() const override {
		return new WinCheckBox();
	}
	MacFactory* CrearControlM() const override {
		return new MacCheckBox();
	}
	LinuxFactory* CrearControlL() const override {
		return new LinuxCheckBox();
	}
};