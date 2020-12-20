#include<iostream>
using namespace std;

namespace BinarySearchTree {
	struct Node {
		int data;
		Node* left;
		Node* right;
		Node(int data) :data(data), left(NULL), right(NULL) {

		}
	};

	class BST {

		Node* root;
		void inorderTrav(Node* node) {

			if (node != NULL) {
				inorderTrav(node->left);
				cout << node->data << ' ';
				inorderTrav(node->right);
			}
		}
		void preorderTrav(Node* node) {

			if (node != NULL) {
				cout << node->data << ' ';
				preorderTrav(node->left);
				preorderTrav(node->right);
			}
		}
		void postorderTrav(Node* node) {

			if (node != NULL) {

				postorderTrav(node->left);
				postorderTrav(node->right);
				cout << node->data << ' ';
			}

		}
	public:
		BST() :root(NULL)
		{

		}
		void add(int data) {
			Node* newnode = new Node(data);
			if (root == NULL)
			{
				root = newnode;
			}
			else {
				Node* trav1, * trav2;
				trav1 = trav2 = root;
				while (trav1 != NULL) {
					trav2 = trav1;
					trav1 = (data < trav1->data) ? trav1->left : trav1->right;

				}
				if (data < trav2->data) {
					trav2->left = newnode;
				}
				else
					trav2->right = newnode;

			}

		}
		void deleteMinNode() {
			if (root == NULL)
				cout << "Tree is empty\n";
			else {
				if (root->left == NULL) {
					Node* temp = root;
					root = root->right;
					cout << "deleting.." << temp->data << '\n';
					delete temp;
				}
				else {
					Node* trav1, * trav2;
					trav1 = trav2 = root;
					while (trav1->left != NULL) {
						trav2 = trav1;
						trav1 = trav1->left;
					}
					trav2->left = trav1->right;
					cout << "deleting..." << trav1->data << '\n';
					delete trav1;
				}
			}
		}
		void deleteMaxNode() {
			if (root == NULL)
				cout << "Tree is empty\n";
			else {
				if (root->right == NULL) {
					Node* temp = root;
					root = root->left;
					cout << "deleting.." << temp->data << '\n';
					delete temp;
				}
				else {
					Node* trav1, * trav2;
					trav1 = trav2 = root;
					while (trav1->right != NULL) {
						trav2 = trav1;
						trav1 = trav1->right;
					}
					trav2->right = trav1->left;
					cout << "deleting..." << trav1->data << '\n';
					delete trav1;
				}
			}
		}
		void inorder() {
			cout << "\n====INORDER==========\n";
			inorderTrav(root);
			cout << "\n=========================\n";
		}
		void preorder() {
			cout << "\n====PREORDER==========\n";
			preorderTrav(root);
			cout << "\n=========================\n";
		}
		void postorder() {
			cout << "\n====POSTRDER==========\n";
			postorderTrav(root);
			cout << "\n=========================\n";
		}
	};
	int main() {
		int arr[7] = { 7,4,10,8,12,2,5 };
		BST bst;
		bst.deleteMaxNode();
		bst.deleteMinNode();
		for (size_t i = 0; i < 7; i++)
		{
			bst.add(arr[i]);
		}
		bst.preorder();
		bst.inorder();
		bst.postorder();
		bst.deleteMinNode();
		bst.deleteMinNode();

		bst.preorder();
		bst.inorder();
		bst.postorder();
		bst.deleteMaxNode();
		bst.deleteMaxNode();

		bst.preorder();

		bst.inorder();
		bst.postorder();

		return 0;
	}
}
