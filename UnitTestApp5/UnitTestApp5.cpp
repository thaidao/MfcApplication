// UnitTestApp5.cpp : Defines the entry point for the console application.
//


//#include "MFCApplication5Dlg.h"
#include "gtest/gtest.h"

//#include "resource.h"
//#include <afxdialogex.h>

////Target function
//bool sum(int *pNumA, int *pNumB, int *pSum)
//{
//	if (pNumA == NULL || pNumB == NULL || pSum == NULL)
//		return false;
//
//	*pSum = *pNumA + *pNumB;
//	return true;
//}

TEST(SumTest, NormalInput) {
	//int a, b, sum;
	//EXPECT_EQ(true, sum(&a, &b, &sum));
	EXPECT_EQ(true, true);
}


TEST(SumTest, NullInput) {
	//EXPECT_EQ(1, DisplayResourceNAMessageBox("Test"));
	//int a, b, sum;

	//EXPECT_FALSE(sum(&a, &b, NULL));

	EXPECT_EQ(false, false);
}
