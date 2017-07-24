var inputList=[];
		for(var i=0;i<5;i++){
		var a=prompt("enter the values");
		inputList[i]=parseInt(a);}
		var b=prompt("enter the element to be searched");
		var c=parseInt(b);
		function binarySearch(inputList, key) {
    var left = 0;
    var right = inputList.length - 1;

    while (left <= right) {
        var mid = parseInt((left + right) / 2);//parseInt converts into integer

        if (inputList[mid] == key)
            return ("element found at position:"+mid);
        else if (inputList[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 'Not found';
}

console.log(binarySearch(inputList, c));//you will get the output in console

