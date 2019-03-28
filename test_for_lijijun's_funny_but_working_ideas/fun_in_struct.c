#include<stdio.h>
typedef int(*p)(int);
inc(int a) {
	return a + 1;
}
main() {
	
	struct damn {
		int a;
		p testfun;//实现自增功能
	};
	struct damn hhh = { 665,inc };
	printf("%d\n", hhh.testfun(hhh.a));//输出应为666
	system("pause");
	return 0;
}
