#pragma once


/* 第3章 数据结构
	约10分，占比13%

	3.1 线性结构
		3.1.1 线性表
		3.1.2 栈和队列
		3.1.3 串
	3.2 数组、矩阵和广义表
		3.2.1 数组
		3.2.2 矩阵
		3.2.3 广义表
	3.3 树
		3.3.1 树与二叉树的定义
		3.3.2 二叉树的性质与存储结构
		3.3.3 二叉树的遍历
		3.3.4 线索二叉树
		3.3.5 最优二叉树
		3.3.6 树和森林
	3.4 图
		3.4.1 图的定义与存储
		3.4.2 图的遍历
		3.4.3 生成树及最小生成树
		3.4.4 拓扑排序和关键路径
		3.4.5 最短路径
	3.5 查找
		3.5.1 查找的基本概念
		3.5.2 静态查找表的查找方法
		3.5.3 动态查找表
		3.5.4 哈希表
	3.6 排序
		3.6.1 排序的基本概念
		3.6.2 简单排序
		3.6.3 希尔排序
		3.6.4 快速排序
		3.6.5 堆排序
		3.6.6 归并排序
		3.6.7 基数排序
		3.6.8 内部排序方法小结
		3.6.9 外部排序
*/
class Chapter3
{
public:
	Chapter3();
	
	/* 3.1 线性结构
	* 定义：拥有唯一前驱和唯一后继的数据关系，n>=0个元素的有序序列
	* 存储结构：顺序存储 or 链式存储，需要了解插入删除等操作及期望
	* 栈（LIFO）、队列（FIFO），需要了解基本操作
	* 串（字符串），KMP匹配算法
	*/

	/* 3.2 数组、矩阵、广义表
	* 数组：定长线性表在维数上的扩展，即线性表中的元素又是一个线性表。
	* 特殊矩阵：矩阵中的元素（或非0元素）的分布有一定规律。常见的有：
	*     对称矩阵：a[i][j] == a[j][i]（1<=i,j<=n）理论上可以压缩一半内存
	*     三角矩阵：非0元素集中在以主对角线为中心的带状区域中
	*     对角矩阵：。。。
	* 稀疏矩阵：非0元素的个数远远少于0元素的个数，且分布没有规律。常见的有
	*     十字链表：。。。
	* 广义表：线性表的推广，元素可以是单元素（同线性表），也可以是有结构的表（广义表）。
	*     长度指元素个数，深度指最大层数（空表=0，全是单元素=1）
	*     一般记为：LS=(a1, a2, ..., an)
	*     取表头：head(LS)，取LS的第一个元素 (a1)
	*     取表尾：tail(LS)，取LS第一个以外的元素 (a2, ..., an)
	*/

	/* 3.3 树
	* 树的定义：n>=0个结点的有限集合，n=0时称为空树。
	* 树的基本概念：
	*     孩子结点、双亲结点（父节点）、兄弟节点
	*     结点的度：下一层的子树的个数
	*     叶子结点：终端结点，度为0
	*     内部节点：根到叶子之间的结点，非root，度不为0
	*     结点的层次：root为第一层，依次往下推
	*     树的高度（深度）：最大层数
	*     有序（无序）树：子树从左到右具有次序，不能交换，称为有序树
	* 二叉树的定义：左、右子树
	*     二叉树第i层（i>=1）上最多有2^(i-1)个结点
	*/

	/* 3.4 图
	*/

	/* 3.5 查找 3.6 排序
	* 见 "SortAndSearch.h"
	*/
};

