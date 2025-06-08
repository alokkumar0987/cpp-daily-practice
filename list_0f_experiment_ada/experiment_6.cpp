#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

// Huffman Tree Node
struct Node {
    char data;
    int freq;
    Node *left, *right;

    Node(char data, int freq) : data(data), freq(freq), left(nullptr), right(nullptr) {}
};

// Comparator for priority queue (min-heap)
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

// Function to build Huffman Tree and return root
Node* buildHuffmanTree(const unordered_map<char, int>& freqMap) {
    priority_queue<Node*, vector<Node*>, Compare> minHeap;

    // Create leaf nodes and push into min-heap
    for (const auto& pair : freqMap) {
        minHeap.push(new Node(pair.first, pair.second));
    }

    // Build Huffman Tree
    while (minHeap.size() > 1) {
        Node* left = minHeap.top(); minHeap.pop();
        Node* right = minHeap.top(); minHeap.pop();

        // Internal node with '$' as dummy data
        Node* merged = new Node('$', left->freq + right->freq);
        merged->left = left;
        merged->right = right;

        minHeap.push(merged);
    }

    return minHeap.top(); // Root of Huffman Tree
}

// Function to traverse Huffman Tree and assign codes
void assignCodes(Node* root, string code, unordered_map<char, string>& huffmanCodes) {
    if (!root) return;

    // Leaf node (contains a character)
    if (root->data != '$') {
        huffmanCodes[root->data] = code;
        return;
    }

    // Traverse left (append '0') and right (append '1')
    assignCodes(root->left, code + "0", huffmanCodes);
    assignCodes(root->right, code + "1", huffmanCodes);
}

// Function to encode input using Huffman Codes
string encode(const string& input, const unordered_map<char, string>& huffmanCodes) {
    string encoded;
    for (char ch : input) {
        encoded += huffmanCodes.at(ch);
    }
    return encoded;
}

int main() {
    string input = "huffman coding is cool!";

    // Step 1: Calculate character frequencies
    unordered_map<char, int> freqMap;
    for (char ch : input) {
        freqMap[ch]++;
    }

    // Step 2: Build Huffman Tree
    Node* root = buildHuffmanTree(freqMap);

    // Step 3: Generate Huffman Codes
    unordered_map<char, string> huffmanCodes;
    assignCodes(root, "", huffmanCodes);

    // Step 4: Encode the input
    string encoded = encode(input, huffmanCodes);

    // Display results
    cout << "Input: " << input << endl;
    cout << "\nCharacter Frequencies:\n";
    for (const auto& pair : freqMap) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }

    cout << "\nHuffman Codes:\n";
    for (const auto& pair : huffmanCodes) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }

    cout << "\nEncoded Output: " << encoded << endl;

    return 0;
}