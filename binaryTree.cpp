#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int item) {
        key = item;
        left = NULL;
        right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = new Node(50);
    }

    
    Node* insert(Node* node, int key) {
        if (node == NULL)
            return new Node(key);
        
        if (key == node->key) {
            cout << "Duplicate entry: " << key << " already exists.\n";
            return node; 
        }

        if (key < node->key)
            node->left = insert(node->left, key);
        else
            node->right = insert(node->right, key);

        return node;
    }

    void insert(int key) {
        root = insert(root, key);
    }

    Node* findMin(Node* node) {
        while (node->left != NULL)
            node = node->left;
        return node;
    }

    
    Node* deleteNode(Node* node, int key) {
        if (node == NULL)
            return node;

        if (key < node->key)
            node->left = deleteNode(node->left, key);
        else if (key > node->key)
            node->right = deleteNode(node->right, key);
        else {
            if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->key = temp->key;
            node->right = deleteNode(node->right, temp->key);
        }

        return node;
    }

    void deleteNode(int key) {
        root = deleteNode(root, key);
    }

    bool search(Node* node, int key) {
        if (node == NULL)
            return false;
        if (node->key == key)
            return true;

        if (key < node->key)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

    void inorder(Node* node) {
        if (node != NULL) {
            inorder(node->left);
            cout << node->key << " ";
            inorder(node->right);
        }
    }

    void preorder(Node* node) {
        if (node != NULL) {
            cout << node->key << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(Node* node) {
        if (node != NULL) {
            postorder(node->left);
            postorder(node->right);
            cout << node->key << " ";
        }
    }

    
    int depth(Node* node) {
        if (node == NULL)
            return 0;
        return 1 + max(depth(node->left), depth(node->right));
    }

  
    Node* mirror(Node* node) {
        if (node == NULL)
            return NULL;

        Node* mirrored = new Node(node->key);
        mirrored->left = mirror(node->right);
        mirrored->right = mirror(node->left);
        return mirrored;
    }

    
    Node* copy(Node* node) {
        if (node == NULL)
            return NULL;

        Node* copied = new Node(node->key);
        copied->left = copy(node->left);
        copied->right = copy(node->right);
        return copied;
    }
    
};

int main() {
    BST tree;
    int choice, value;

    while (true) {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Inorder Traversal\n5. Preorder Traversal\n6. Postorder Traversal\n";
        cout << "7. Depth of Tree\n8. Mirror Image\n9. Copy Tree\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            tree.insert(value);
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            tree.deleteNode(value);
            break;
        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            if (tree.search(tree.root, value))
                cout << "Value found.\n";
            else
                cout << "Value not found.\n";
            break;
        case 4:
            cout << "Inorder Traversal: ";
            tree.inorder(tree.root);
            cout << endl;
            break;
        case 5:
            cout << "Preorder Traversal: ";
            tree.preorder(tree.root);
            cout << endl;
            break;
        case 6:
            cout << "Postorder Traversal: ";
            tree.postorder(tree.root);
            cout << endl;
            break;
        case 7:
            cout << "Depth of Tree: " << tree.depth(tree.root) << endl;
            break;
        case 8:
            cout << "Mirror Image (Inorder): ";
            tree.inorder(tree.mirror(tree.root));
            cout << endl;
            break;
        case 9:
            cout << "Copied Tree (Inorder): ";
            tree.inorder(tree.copy(tree.root));
            cout << endl;
            break;
        
        default:
            cout << "Invalid choice! Exiting...\n";
            return 0;
        }
    }

    return 0;
}
