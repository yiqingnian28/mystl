/******************************************************************************
*
*
******************************************************************************/

struct TreeNodeBase{
	typedef TreeNodeBase* BasePointer;
	BasePointer parent_;
	BasePointer left_;
	BasePointer right_;
};

template<typename Value>
struct TreeNode:public TreeNode{
	typedef TreeNode<Value>* LinkType;
	Value valueField_;
};

struct TreeBaseIterator{
	typedef TreeNodeBase::BasePointer BasePointer;
	
};