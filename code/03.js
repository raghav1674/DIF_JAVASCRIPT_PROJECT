// const as=10;

// // // s=11;

// // // console.log(s);




// // // for(var i=1;i<10;i++){

   
// // //     console.log(i);




// // // }

// // // console.log(i);


// // var s="hello";

// // console.log(s.length);

// // console.log(s[1]);

// // console.log(s.indexOf("hhello"));

// // console.log(s.slice(0,4));

// // console.log(s.toUpperCase());

// // s= s.replace("h","y");


// // console.log(s);


// function greetHello(names){

    // for(let i=0;i<names.length;i++)
    //     console.log(`Hello ${names[i]}`);


// }

// // names=["Raghav","Ashutosh","Sparsh"];
// // greetHello(names);


// let name="Raghav";

// let s=name.substring(0,4);

// console.log(name.lastIndexOf(s));

// console.log(s);


// let charArray = name.split("");

// console.log(charArray);


// console.log(charArray.join("/"));


// let i="10asdsad";

// i=String(i);



// i=Number.parseInt(i,10);

let sa=10.001110101920129012910;

// sa=sa.toFixed(9);
// 2.1112 // ceil: 3  and floor: 2  and trunc: 2  round:2
// let res= Math.floor(25.11/10); // 2.511 : round: 3

// console.log(res);

console.log();

let randomNumbers=[];

for(let i=0;i<50;i++){

    randomNumbers.push(Math.trunc(Math.random()*(100000-1000) + 1000));
    
}

for(let rn=0;rn<randomNumbers.length;rn++)
    console.log(`Ticket Number:  ${randomNumbers[rn]}`);


// console.log(typeof(i));


// 0 to 1 )* 100 0 to 100  

// (0 to 1)  