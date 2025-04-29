class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        shortest_string = strs[0]
        for string in strs:
            if len(shortest_string)>len(string):
                shortest_string = string
        lcp = ""
        flag = None
        for i in range(len(shortest_string)):
            for j in range(len(strs)):
                if strs[j][i]==shortest_string[i]:
                    if (j+1)==len(strs):
                        lcp = lcp + shortest_string[i]
                elif strs[j][i]!=shortest_string[i]:
                    flag = True
                    break
            if flag==True:
                break
        return lcp