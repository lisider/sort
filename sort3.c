#include <stdio.h>
#include <stdlib.h>

#define NUM 4

int main(void){

	int i,j;
	int a[NUM]={0};
	int temp;

	int minIndex = 0;

	// 1. 获取 输入 进 数组

	printf("给数组赋的十个值：\n");  
	for(i=0;i<NUM;i++)
	{
		scanf("%d",&a[i]);
	}

	// 2. 打印数组

	printf("该数组为：\n");
	for(i=0;i<NUM;i++)
	{
		printf("%d ",a[i]);
	}



	// 4. 选择排序 

	printf("\n升序排序为：\n");
	for(i=0;i<NUM;i++)
	{
		minIndex = i;
		for(j=i+1;j<NUM;j++)
		{
			if(a[minIndex] > a[j])
			{
				minIndex = j;
			}
		}

		if(minIndex != i) { //如果minIndex不为i，说明找到了更小的值，交换之。

			temp=a[minIndex];
			a[minIndex]=a[i];
			a[i]=temp;
		}

		printf("%d ",a[i]);
	}
	printf("\n");


	return 0;
}







#if 0


选择排序 是 在 冒泡排序上的一种优化算法

选择排序的思想是 两层循环,外循环和内循环 
	
		外循环是在 遍历数据, 内循环是 对每个数据的处理

		在一次循环内 
			将被关注的 数据 和 其他数据 依次比较(存在表条件), 如果 满足条件,则 做个标识
		然后一次循环比较完成之后
			判断标识,在做某事(一般为交换)

	遍历整个数据链{
		设置标识为为当前节点
		得到 数据A//每次得到的数据都是数据链中的一员
		遍历 数据A 之后的数据链(注意,只能往后遍历,不能再遍历 前面了,在循环链表中尤其注意){
			得到数据 B//每次得到的数据都是数据 A 之后的数据链中的一员
			将 标志位 和 B 比较,如果满足,置位标志位(一般为最大值或者最小值的 标记(宿主下标))
		}

		标志位如果变化(标志位不是当前节点),则替换
	}



注意 :(和冒泡的不同)
	1/
	多设置了一个标志位
	2/
	比较的内容不同,(冒泡 A B) (选择  标志位 B)
	3/
	比较之后做的事情不同 (冒泡 交换) (选择 设置标志位)
	4/
	一次内循环之后做的事情不同 (冒泡 无) (选择 交换)

#endif

