#include "test.h"

// int型のグローバル変数
int GlobalData;

test::test()
{
}


test::~test()
{
}

// 外部定義
void test::WTF()
{
}

void test::SetGlobalData()
{
	// グローバル変数にlolを保存
	GlobalData = lol;
}

// グローバル変数の取得やで！
int GetGlobalData()
{
	// グローバル変数の値を返す
	return GlobalData;
}
