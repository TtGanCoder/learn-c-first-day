#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//初学C语言
//两个数的加法程序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d",&a ,&b);
//	sum=a+b;
//	printf("sum=%d\n",sum);
//
//	return 0;
//求10个数的平均值，其中的scanf函数不能用\n，不然需要输入11个数
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float avg = sum / 10.0;
//	printf("avg=%.1f\n", avg);
//	return 0;
//}
// 探寻如何打印出小数0.5，并且发现需要把其中一个除数设置成浮点数如：10.0
//int main()
//{
//	int i = 5;
//	float j = i / 10.0;
//	printf("j=%.1f\n", j);
//	return 0;
//}
//探寻用指针寻找数组地址，int* p = arr;默认指针指向数组下标为0的位置，若要指向其他位置则需要加上符号&如：int* p =& arr[2];
//main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d", * p);
//		p++;
//	}
//	return 0;
//}
//学习调试代码，先按F10运行起来，调试，窗口，监视，监视窗口，选择要监视的对象,第一次按F10是进入调试环境，
//是逐行调试的，指针是慢慢从第一行按照顺序执行下去的（每按一次F10执行一次），程序如果执行到需要中断的节点
// 会停止弹出操作页面，比如这个代码，会弹出操作页面让你输入数据，（scanf函数），你可以选择输入一个数据
// 或者一次性全输入完，按回车调试便可以继续执行，因为这个F10的调试过程实际上就是每按一次F10便执行一行
// 代码，在这其中你可以选择添加监视对象以便理解这个C语言代码运行的过程
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float avg = sum / 10.0;
//	printf("avg=%.1f\n", avg);
//	return 0;
//全局变量，当两个.c文件存在时，一个文件想要引用另一个文件的全局变量时，需要先声明一下：extern+变量类型+变量名称；与另一个文件相比就是多了一个extern
//生命周期：一个变量从创建到销毁的时间段，全局变量的生命周期就是程序的生命周期，局部变量的生命周期就是从进入局部范围到出局部范围

//常量
//int main()
//{
	//1.字面常量
	//3.14;
	//3;
	//"a";
	//"asdf";
	//2.被const修饰的常变量，当你不希望一个变量再变化的时候，便可以在前面加上const修饰，此时他具有常量的性质又有变量的性质，也就是说不能完全当做常量
	//const int a = 10;
	//3.#define定义的标识符常量，是不可改的，相当于定义一个符号表示一个数
//#define MAX 10000//此时MAX就是10000，就算下面再将MAX=200，他也是10000，不过这样是有语法错误的
//	return 0;
//}
//4.枚举常量  enum+定义的符号相当于定义了一个类似int类型感觉的变量
//enum power
//{
//	low,//如果不给这些枚举常量赋值的话，他们的值将会从第一个开始默认为是0 1 2....也就是说low的值是0，normal的是1...
//	    //但是，如果我们赋值normal=2时，low仍然是0，但是normal和之后的枚举常量将会随着normal的赋值逐次加一
//	normal=2,
//	high
//};
//int main()
//{
//	enum power s = low;//此时s只能在上面定义的枚举常量范围变化
//	printf("%d\n", low);
//	printf("%d\n", normal);
//	printf("%d\n",high );
//	return 0;
//}

//字符串：由双引号括起来的一堆字符，结束标志是\0，也就是说，每一个字符串末尾都有一个隐藏的\0，以下是验证代码：
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//注意对字符串进行放入时要用''而不是"",
//	printf("%s\n", arr1);//打印字符类型时要用%s，浮点%f，双浮点%lf，整形%d
//	printf("%s\n", arr2);
//	return 0;
//}//此时打印出来的结果arr2是abc后面还有一堆乱码，如果想要正常显示只需要在arr2后面的括号里加上‘\0‘即可
//求字符串的长度
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%s\n", strlen(arr1));
	printf("%s\n", strlen(arr2));
	return 0;
}