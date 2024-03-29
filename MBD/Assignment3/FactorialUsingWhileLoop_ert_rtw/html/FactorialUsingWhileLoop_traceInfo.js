function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FactorialUsingWhileLoop"};
	this.sidHashMap["FactorialUsingWhileLoop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FactorialUsingWhileLoop:18"};
	this.sidHashMap["FactorialUsingWhileLoop:18"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "FactorialUsingWhileLoop:27"};
	this.sidHashMap["FactorialUsingWhileLoop:27"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/IC"] = {sid: "FactorialUsingWhileLoop:28"};
	this.sidHashMap["FactorialUsingWhileLoop:28"] = {rtwname: "<Root>/IC"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem1"] = {sid: "FactorialUsingWhileLoop:18"};
	this.sidHashMap["FactorialUsingWhileLoop:18"] = {rtwname: "<Root>/While Iterator Subsystem1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "FactorialUsingWhileLoop:29"};
	this.sidHashMap["FactorialUsingWhileLoop:29"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "FactorialUsingWhileLoop:19"};
	this.sidHashMap["FactorialUsingWhileLoop:19"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "FactorialUsingWhileLoop:20"};
	this.sidHashMap["FactorialUsingWhileLoop:20"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "FactorialUsingWhileLoop:21"};
	this.sidHashMap["FactorialUsingWhileLoop:21"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Delay1"] = {sid: "FactorialUsingWhileLoop:22"};
	this.sidHashMap["FactorialUsingWhileLoop:22"] = {rtwname: "<S1>/Delay1"};
	this.rtwnameHashMap["<S1>/LessThanOrEqual"] = {sid: "FactorialUsingWhileLoop:23"};
	this.sidHashMap["FactorialUsingWhileLoop:23"] = {rtwname: "<S1>/LessThanOrEqual"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "FactorialUsingWhileLoop:24"};
	this.sidHashMap["FactorialUsingWhileLoop:24"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "FactorialUsingWhileLoop:25"};
	this.sidHashMap["FactorialUsingWhileLoop:25"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "FactorialUsingWhileLoop:26"};
	this.sidHashMap["FactorialUsingWhileLoop:26"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
