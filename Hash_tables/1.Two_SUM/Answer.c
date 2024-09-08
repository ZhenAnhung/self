/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2 ;
    // locate res 
    int *res = (int *) malloc(sizeof(int)*20);
    int count = 0;
    // check size and decide to for loop iteration
    for (int i =0;i<numsSize;i++){
        for (int j = 0; j<i ;j++){
            if(nums[j] == target- nums[i]){
                res[count++] = j ;
                res[count++] = i ;
                return res;
            }
        }
    }
    return res;
}