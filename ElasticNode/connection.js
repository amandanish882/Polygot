var elasticsearch = require('elasticsearch');
var client = new elasticsearch.Client({
    hosts: [
        'https://localhost:9200/'
    ]
});