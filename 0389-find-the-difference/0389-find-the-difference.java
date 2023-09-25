class Solution {
    public char findTheDifference(String s, String t) {
        
        char[] sChar = s.toCharArray();
        char[] tChar = t.toCharArray();
        
        Arrays.sort(sChar);
        Arrays.sort(tChar);
        
        for(int i = 0; i < sChar.length; ++i)
        {
            if(sChar[i] != tChar[i])
                return tChar[i];
        }
        
        return tChar[tChar.length-1];
        
    }
}