#pragma once
//WINDOWS
class WinFactory {
public:
	virtual ~WinFactory() {};
	virtual std::string Draw() const = 0;
};
class WinButton : public WinFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Windows";
	}
};
class WinCheckBox : public WinFactory {
	std::string Draw() const override {
		return "Dibujando CheckBox Windows";
	}
};