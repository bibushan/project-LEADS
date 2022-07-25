class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string rev = bitset<32>(n).to_string();
        reverse(rev.begin(), rev.end());
        return bitset<32>(rev).to_ulong();
    }
};