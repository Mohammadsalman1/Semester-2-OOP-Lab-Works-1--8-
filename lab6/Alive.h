#pragma once

class Alive
{
public:
	Alive();
	Alive(bool);
	~Alive();
	void isAlive();
	void setAlive(bool);
private:
	bool breath;
};