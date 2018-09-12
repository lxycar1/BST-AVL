1.先和这棵树的根比
2.如果比这个树根小就和这个树根的左子树的根比，否则就和这个树根的右子树比。
3.重复2过程，直到根为空为止。
 根据3个步骤很容易实现递归代码。
//搜索元素，参数依次为0: 根节点,1: 查找的元素,2: 找到目标元素的前一个节点指针，初始值为NULL
// 3:如果返回真把目标到元素的指针指向n，返回假，就把pre复制给n）

 bool SearchBST(BiTree T,int key,BiTree pre,BiTree&n)
 {
     if(!T)
     {
         n=pre;       //如果此数为空树，那我们就把前一个元素指针pre（此时为NULL）复制给n，注意树为空时，n才为NULL。
         return false;   //返回假没有找到
     }
     else if(key==T->data)
     {
         n=T;        //找到了就把目标元素指针给n
         return true;
     }
     if(key<T->data)
         SearchBST(T->lchild,key,T,n) ;//去找他的左子树根比
     else
     {
         SearchBST(T->rchild,key,T,n);//去找他的右子树根比。
     }
 }
