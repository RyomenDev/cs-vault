
const path = require('path');

console.log(path.dirname('C:/_Vatsh/_Blossom/_CS-master/node_js/Thapa technical/_11_path_module.js'));

console.log(path.extname('C:/_Vatsh/_Blossom/_CS-master/node_js/Thapa technical/_11_path_module.js'));  // .js -- extension

console.log(path.basename('C:/_Vatsh/_Blossom/_CS-master/node_js/Thapa technical/_11_path_module.js'));

console.log(path.parse('C:/_Vatsh/_Blossom/_CS-master/node_js/Thapa technical/_11_path_module.js')); // all string
const myPath =path.parse('C:/_Vatsh/_Blossom/_CS-master/node_js/Thapa technical/_11_path_module.js'); // all string

console.log(myPath.name);
