#pragma once
//LINUX
class LinuxFactory {
public:
	virtual ~LinuxFactory() {};
	virtual std::string Draw() const = 0;
};
class LinuxButton : public LinuxFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Linux";
	}
};
class LinuxCheckBox : public LinuxFactory {
	std::string Draw() const override {
		return "Dibujando CheckBox Linux";
	}
};