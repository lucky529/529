#define _CRT_SECURE_NO_WARNINGS 1
public void add(T data){
    Node newNode=new Node(data);
    if(root==null){
        root=newNode;
    }else {
        add(newNode, root);
    }
}
public void add(Node addNode,Node parentNode) {
    T data=addNode.data;
    Node currentNode=parentNode;
    Node parent=null;
    int flag=0;
    while(currentNode!=null){
        parent=currentNode;
        flag=data.compareTo(currentNode.data);
        if(flag>0){
            currentNode=currentNode.rightChild;
        }else {
            currentNode=currentNode.leftChild;
        }
    }
    if(flag>0){
        parent.rightChild=addNode;
    }else {
        parent.leftChild=addNode;
    }
    addNode.parent=parent;        
}
