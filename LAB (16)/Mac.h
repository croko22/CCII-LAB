#pragma once
//MAC
class MacFactory {
public:
	virtual ~MacFactory() {};
	virtual std::string Draw() const = 0;
	virtual std::string draw(const WinFactory& colaborador) const = 0;
};
class MacButton : public MacFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Mac";
	}
	std::string draw(const WinFactory& colaborador) const
		override {
		const std::string result = colaborador.Draw();
		return "Mac Button con ayuda de " + result;
	}
};
class MacCheckBox : public MacFactory {
public:
	std::string Draw() const override {
		return "Dibujando CheckBox Mac";
	}
	std::string draw(const WinFactory& colaborador) const
		override {
		const std::string result = colaborador.Draw();
		return "Mac Button con ayuda de " + result;
	}
};