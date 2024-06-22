/* 
    process.argv property returns an array of command line arguments passed when the Node.js process is launched
    The first element is the process.execPath. To see original value, ie argv[0] use process.argv0
    The second element is the path to the JS file being executed.
    The remaining elements are any command-line arguments  
*/

const {argv} = process.argv;

argv.forEach((index, value) => {
    console.log(`${index}: ${value}`)
});