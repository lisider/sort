#include <stdio.h>
int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
		return;

	temp=a[left]; //temp中存的就是基准数
	i=left;
	j=right;
	while(i!=j)
	{
		//顺序很重要，要先从右边开始找
		while(a[j]>=temp && i<j)
			j--;
		//再找右边的
		while(a[i]<=temp && i<j)
			i++;
		//交换两个数在数组中的位置
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	//最终将基准数归位
	a[left]=a[i];
	a[i]=temp;

	quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程
	quicksort(i+1,right);//继续处理右边的 ，这里是一个递归的过程
}

int main(void){
	int i,j,t;
	//读入数据
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	quicksort(1,n); //快速排序调用

	//输出排序后的结果
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}


#if 0

快速排序是 
	1 找基准 ,小于基准的数放到基准的左边 大于基准的数放到基准的右边
	2 将左边的看成一个 数据组,并执行1
	3 将右边的看成一个 数据组,并执行1

	所以快速排序 是一个 递归

	fun
		排序完成,什么都不做
		排序没完成
			找基准 ,小于基准的数放到基准的左边 大于基准的数放到基准的右边
			调用 fun 执行左边的 数据组
			调用 fun 执行右边的 数据组
	---------

最重要 的 
	1 是怎么找基准
		最左边的就是基数
	2 怎么 放数
		从右边开始
#endif





