inputList = new Array();
inputList[0] = 'E';
inputList[1] = 'I';
inputList[2] = 'O';
inputList[3] = 'P';
inputList[4] = 'Q';
inputList[5] = 'R';
inputList[6] = 'T';
inputList[7] = 'U';
inputList[8] = 'W';
inputList[9] = 'Y';

function binarySearch(inputList, key) {
    var left = 0;
    var right = inputList.length - 1;

    while (left <= right) {
        var mid = parseInt((left + right) / 2);//parseInt converts into integer

        if (inputList[mid] == key)
            return mid;
        else if (inputList[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 'Not found';
}

alert(binarySearch(inputList, 'T'));
alert(binarySearch(inputList, 'Z')); // Not found
