// const promise1=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
        
//         console.log(`async work done`);
//         resolve();
//     },1000)
// })
// promise1.then(()=>{
//     console.log("p1 resolved");
// })

// new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         console.log("done again");
//         resolve();
//     })
// }).then(()=>{
//     console.log("rsolved again");
// })

// const p2=new Promise((resolve,reject)=>{
//     console.log("async with return");
//     resolve({name:"aryan gairola",roll_no:16})
// })
// p2.then((user)=>{
//     console.log(user);
// })

                                            //error
// const p3=new Promise((resolve,reject)=>{
//     error=false;
//     if(!error)
//     {
//     console.log("async with reject");
//     resolve({name:"aryan gairola",roll_no:16})
//     }
//     else{
//         reject("fooook off");
//     }
// })
// p3.then((user)=>{
//     console.log(user);
// }).catch((error)=>{
//     console.log(error);
// })

                                            //chaining
// p3.then((user)=>{
//     return user.name;
// }).then((username)=>{
//     console.log(username);
// }).catch((error)=>{
//     console.log(error);
// })

                                            //async await

// const p4=new Promise((resolve,reject)=>{
//     const error=true;
//     if(error){
//         reject("something went wrong");
//     }
//     else{
//         console.log("task completed");
//         resolve({lang:"JS",length:20});
//     }
// })
// const consume=async ()=>{   
//     try{
//         const response=await p4;
//         console.log(response);
//     }
//     catch(response){
//         console.log(response);
//     }
//     finally{
//         console.log("finally done");
//     }
// }
// consume();

                                        //API

// async function apidata(){
//     try{
//         const info=await fetch("https://jsonplaceholdertypicode.com/users");
//         console.log(typeof(info))
//         const data= await info.json();
//         console.log(typeof(data))
//         console.log(data);
//     }catch(e){
//         console.log(e+"-> not found");
//     }
// }
// apidata();
                                        //similiar

fetch("https://jsonplaceholder.typicode.com/users").then((response)=>{
    return response.json();
}).then((data)=>{
    console.log(data);
}).catch((error)=>{
    console.log(error);
})                                        