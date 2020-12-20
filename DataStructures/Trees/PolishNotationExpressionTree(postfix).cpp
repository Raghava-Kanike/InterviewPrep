#include<iostream>
#include<string>
using namespace std;
///Expression Tree polish Notation(pre,in,post)
//evaluating postfix 
//input the postfix form(string) ==>move the string from right to left ==>then push to stack whenever an alphabet is encounted
//whenever an operator is encountered pop the element from stack and assign it to node->right 
//and pop another element from stack and assign it to node->left
namespace postfix {
	template<typename T, int size>
	class Stack {
		T arr[size];
		int top;
	public:
		Stack() :top(-1)
		{
		}
		bool IsEmpty()
		{
			return top == -1;
		}
		bool IsFull()
		{
			return top == size;
		}
		void Push(T val)
		{
			arr[++top] = val;
		}
		T Pop()
		{
			return arr[top--];
		}
		T Peek()
		{
			return arr[top];
		}
	};

	struct Node {
		char data;
		Node* left;
		Node* right;
		Node(int data) :data(data), left(NULL), right(NULL)
		{

		}


	};
	class ExpressionTree {
		Node* root;
		Stack<Node*, 10> stk;

		void preorderTrav(Node* cur) {
			if (cur != NULL) {
				cout << cur->data << ' ';
				preorderTrav(cur->left);
				preorderTrav(cur->right);
			}
		}
		void inorderTrav(Node* cur) {
			if (cur != NULL) {
				inorderTrav(cur->left);
				cout << cur->data << " ";
				inorderTrav(cur->right);
			}
		}

		void postorderTrav(Node* cur) {
			if (cur != NULL) {
				postorderTrav(cur->left);
				postorderTrav(cur->right);
				cout << cur->data << " ";
			}
		}
		void release(Node* cur) {
			if (cur != NULL) {
				release(cur->left);
				release(cur->right);
				cout << "releasing..." << (char)cur->data << "\n";
				delete cur;
			}
		}
		void add(char data) {
			Node* node = new Node(data);
			if (!isalpha(data)) {
				node->right = stk.Pop();
				node->left = stk.Pop();
			}
			stk.Push(node);


		}
		int Evaluate(Node* cur) {

			switch (cur->data) {
			case '+':
				return Evaluate(cur->left) + Evaluate(cur->right);
			case '-':
				return Evaluate(cur->left) - Evaluate(cur->right);
			case '*':
				return Evaluate(cur->left) * Evaluate(cur->right);
			case '/':
				return Evaluate(cur->left) / Evaluate(cur->right);
			case '^':
				return Evaluate(cur->left) ^ Evaluate(cur->right);
			default:
				cout << "please enter value for " << cur->data << "\n";
				int val;
				cin >> val;
				return val;
			}

		}
	public:
		ExpressionTree() :root(NULL)
		{

		}
		void getPostFixed(string exp) {

			int length = exp.size();
			for (size_t i = 0; i < length; i++)
			{
				this->add(exp[i]);
			}
			root = stk.Pop();
		}
		int eval() {
			return Evaluate(root);
		}

		void inorder() {
			cout << "\n+++++INORDER+++++\n";
			inorderTrav(root);
			cout << "\n+++++++++++++++++++++\n";
		}
		void preorder() {
			cout << "\n+++++PREORDER+++++\n";
			preorderTrav(root);
			cout << "\n+++++++++++++++++++++\n";
		}
		void postorder() {
			cout << "\n+++++POSTORDER+++++\n";
			postorderTrav(root);
			cout << "\n+++++++++++++++++++++\n";

		}
		~ExpressionTree()
		{
			release(root);
		}

	};
	int main() {
		string postfixed = "abc*+d+";
		string infixed = "a+b*c+d";
		string prefixed = "++a*bcd";
		ExpressionTree et;
		et.getPostFixed(postfixed);
		cout << "inorder: " << infixed << '\n';
		cout << "preorder: " << prefixed << '\n';
		cout << "postorder: " << postfixed << '\n';

		et.postorder();
		et.inorder();
		et.preorder();
		cout << "result:" << et.eval() << endl;

		return 0;
	}
}
