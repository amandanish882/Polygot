using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Elasticsearch.Net;
using Newtonsoft.Json;
using System.Runtime.CompilerServices;

namespace ElasticSearchWrapper
{
    public class Class1
    {
        public string dosomething(string esUrl){
            var node = new Uri(esUrl);
            var config = new ConnectionConfiguration(node);
            var client = new ElasticLowLevelClient(config);
            //return client.GetSource<string>("movies", "movie", "AVpLSOrF6ryMWCw3ykHv").Body;                        
            var myJson = new { hello = "world" };
            return client.Index<string>("movies", "movie", "2", myJson).Body; 
        }

        public string serialize(Dictionary<string,object> dictionary){
            return JsonConvert.SerializeObject(dictionary);
        }

    }
}
