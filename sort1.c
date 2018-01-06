#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i,j;
	int a[]={0};


	// 1. 获取 输入 进 数组

	printf("给数组赋的十个值：\n");  
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	// 2. 打印数组

	printf("该数组为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	// 3. 冒泡排序

	printf("\n降序排序为：\n");
	for(i=0;i<10;i++)       
	{
		for(j=i+1;j<10;j++)     
		{
			if(a[i]<a[j])     
			{
				int temp=a[i];
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		printf("%d ",a[i]); //这是后 a[i] 已经定下来了
	}


	// 4. 冒泡排序 

	printf("\n升序排序为：\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		printf("%d ",a[i]);
	}

	// 3 和 4 的不同 在于 排序条件不一样, 排序思想是一样的

	return 0;
}







#if 0


冒泡排序的思想是 两层循环,外循环和内循环 
	
		外循环是在 遍历数据, 内循环是 对每个数据的处理

		在一次循环内 (内循环)
			将被关注的 数据 和 其他数据 依次比较(存在表条件), 如果 满足条件,则 做交换
		然后一次循环比较完成之后 (内循环)
			什么都不做

			-----------------

	遍历整个数据链{
		得到 数据A//每次得到的数据都是数据链中的一员
			遍历 数据A 之后的数据链(注意,只能往后遍历,不能再遍历 前面了,在循环链表中尤其注意){
				得到数据 B//每次得到的数据都是数据 A 之后的数据链中的一员
					将 A 和 B 比较,做动作
			}
	}
		



#endif
