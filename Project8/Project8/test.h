#pragma once

class test
{
public:
	test();
	~test();

	// 仮定義
	void WTF();

	void SetGlobalData();

private:
	int lol;
};

// なんかの仮定義
int GetGlobalData();

int ABC(){
	return 1;
}