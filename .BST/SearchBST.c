 //搜索树：
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
