class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_length = 0;
        int startIndex  = 0;
        int endIndex = 0;
        Set<Character> set = new HashSet<>();
        
        while (endIndex < s.length()) {
            if (!set.contains(s.charAt(endIndex))) {
                set.add(s.charAt(endIndex));
                endIndex++;
                max_length = Math.max(set.size(), max_length);
            } else {
                set.remove(s.charAt(startIndex));
                startIndex++;
            }
        }

        return max_length;
    }
}