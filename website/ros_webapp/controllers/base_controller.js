'use strict';

var paramServer = require('../lib/init').paramServer;

var fn_test = async (ctx, next) => {
	ctx.render('test.html',{model: paramServer.getParam('model'),
		version: paramServer.getParam('version')
		});
};

module.exports = {
	'GET /test': fn_test
};
