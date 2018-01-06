#include<stdio.h>
#include<stdlib.h>

#define N 8

void insert_sort(int a[],int n);


//插入排序实现,这里按从小到大排序
void insert_sort(int a[],int n)//n为数组a的元素个数
{
    //进行N-1轮插入过程
    for(int i=1; i<n; i++)
    {
        //首先找到元素a[i]需要插入的位置
        int j=0;
        while( (a[j]<a[i]) && (j<i))
        {
            j++;
        }

        //将元素插入到正确的位置
        if(i != j)  //如果i==j，说明a[i]刚好在正确的位置
        {
            int temp = a[i];
            for(int k = i; k > j; k--)
            {
                a[k] = a[k-1];
            }
            a[j] = temp;
        }
    }
}


int  main()
{
	int i=0,j=0;
	int tmp;
    int a[N] = {89, 38, 11, 78, 96, 44, 19, 25};

    for(i=0; i<N; i++)
        printf("%d  ", a[i]);

    //insert_sort(num, N);

	for(i = 1;i<N;i++){
		//get a[i]
		for(j = 0;j < i;j++){
			//get a[j]
			if(a[i] < a[j]){ //一开始的小

				int temp = a[i];
				for(int k = i; k > j; k--) //和 i 后面的没关系,和 j 之前的也没关系 只是影响到了 i前面 的 和 j 后面的
				{ 							//(j后面的,i前面的)依次往后移动一位,然后将i 放到 j 的位置
					a[k] = a[k-1];
				}
				a[j] = temp;

				break; //加不加都可以,最好加上,因为可以省时间
			}
		}
	}
	printf("\n----------------------\n");

	for(int i=0; i<N; i++)
		printf("%d  ", a[i]);

	printf("\n");


	//system("pause");
	return 0;
}

#if 0


冒泡排序的思想是 两层循环,外循环和内循环 
	
		外循环是在 遍历数据, 内循环是 对每个数据的处理

		找到 被关注的数据 插入的位置,然后 将 数据插入

		------------------------------------

从第二个数据开始遍历数据链{
	得到数据A
		从第一个数据开始遍历数据链,直至到数据A{
			得到数据B
				将A 和 B 比较,满足条件,则将A插入B的前面(注意维护整个数据链的完整),并break
				 //只要是 A 和 A之前的数据 比较,
				 //第一次满足条件(且这次循环中最多会满足一次),并插入,A 和 A 之前的数据就已经排序好了
				 //因为 数据 A 之前的已经排好序了,  
				 //其实加不加都一样,因为就算不加,后面的 会判断条件,然后条件不会成立,不会做动作
		}
}

最重要的是维护 (j, j之后 且 i 之前 的数据, i) 的 数据链关系 


#endif
