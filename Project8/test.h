#pragma once

class test
{
public:
	test();
	~test();

	// ����`
	void WTF();

	void SetGlobalData();

private:
	int lol;
};

// �Ȃ񂩂̉���`
int GetGlobalData();

int ABC(){
	return 1;
}