---
layout: slide
author: Steven Bergner
title: Graph-tool tutorial
date: February 11th, 2020
theme: beige
transition: fade-in
---
{::options parse_block_html="true" /}
{% include_relative slide-theme-customization.snippet %}
{:fr: .fragment }

<section>
# {{page.title}}

{{page.author}}

<small>{% include protect-email-raw.include email=site.email %}</small>

<small>*{{page.date}}*</small>

<small><a href="?print-pdf">[single page]</a></small>

</section>

<section>
# Sources
* [Graph-tool project](https://graph-tool.skewed.de)
* [Mosky's "Graph-tool in practice"](https://www.slideshare.net/moskytw/graphtool-in-practice)
</section>

<section>
# Lab setup
* Activate the `gt` conda environment
```
mkdir -p ~/.conda/envs
ln -s /usr/shared/CMPT/big-data/condaenv/gt ~/.conda/envs
source activate gt
```
* And load the `graph_tool` module
```
python
>>> import graph_tool.all as gt
>>> print(gt.__version__.split(' ')[0])
2.29
```
* Environment also contains `pandas, jupyter (lab),  ...`
{: .small }
</section>

<section>
<section>
# Outline
* Create graph
* Visualize graph
* Analyze graph
* Visualize again
</section>

<section>
## Introducing: [Graph-tool](https://graph-tool.skewed.de/)
* Manipulate and analyse graphs
* {: fr} [Fast!](https://graph-tool.skewed.de/performance) - based on Boost Graph in C++, OpenMP
  - Utilize multiple cores if available
* {: fr} Visualization
  - Powerful [drawing algorithm](https://graph-tool.skewed.de/static/doc/draw.html)
  - Interface with [graphviz](http://www.graphviz.org/) package
* {: fr} Lots of graph processing algorithms
</section>

<section>
## How to start
* Define your problem
* Convert it into graph representation, i.e. determine what `nodes` and `edges` are
</section>

<section>
## Example

||**What**|**Weight**
|**Vertex**|Person|#Knows
|**Edge**|Knows|Count

* [Accompanying notebook](graph-tool-tutorial-todo.ipynb)
</section>

<section>
## [Example from lecture](09_networks.pdf#page=16)

|**X**|**Adjacent to X**|
|Mary|Peter, Albert, DavidF, Peter|
|Judy|Bob, Alan|
|Peter|Mary, DavidF, Jon|
|DavidF|Albert, Joseph, Peter, Mary|
|Jon|Peter, Joseph, DavidE|
|DavidE|Jon, Joseph, Albert|
|Joseph|DavidE, Jon, DavidF|
|Bob|Judy, Alan|
|Alan|Bob, Mary, Judy|
|Albert|DavidF, Mary, DavidE|
{: .small }

</section>
{: .small }

{::comment}
X_knows = {
    'Mary': ['Peter', 'Albert', 'DavidF', 'Peter'],
    'Judy': ['Bob', 'Alan'],
    'Peter': ['Mary', 'DavidF', 'Jon'],
    'DavidF': ['Albert', 'Joseph', 'Peter', 'Mary'],
    'Jon': ['Peter', 'Joseph', 'DavidE'],
    'DavidE': ['Jon', 'Joseph', 'Albert'],
    'Joseph': ['DavidE', 'Jon', 'DavidF'],
    'Bob': ['Judy', 'Alan'],
    'Alan': ['Bob', 'Mary', 'Judy'],
    'Albert': ['DavidF', 'Mary', 'DavidE'],
}
{:/comment}

<section>
## Create minimal graph
```
g = gt.Graph()
v1 = g.add_vertex()
v2 = g.add_vertex()
e = g.add_edge(v1, v2)
```
</section>

<section>
## Properties
```
v_count_p = g.new_vertex_property('int')

# store it in our graph, optionally
g.vp['count'] = v_count_p
```
</section>

<section>
## Faster import
```
from graph_tool import Graph
```
</section>

<section>
## Counting
```
name_v_map = {}
for name in names:
    v = name_v_map.get(name)
    if v is None:
        v = g.add_vertex()
        v_count_p[v] = 0
        name_v_map[name] = v
    v_count_p[v] += 1
```
</section>
</section>

<section>
<section>
# Visualize Graph
</section>
<section>
## Draw to output format
```
gt.graph_draw(
    g,
    output_path = 'output.pdf',
)

gt.graph_draw(
    g,
    output_path = 'output.png'
)
```
* **Task 1:** Try this for one of the example graphs in the collection
</section>

<section>
## Use constants
```
SIZE     = 400
V_SIZE   = SIZE / 2
E_PWIDTH = V_SIZE / 4
gt.graph_draw(
    ...
    output_size = (SIZE, SIZE),
    vertex_size = V_SIZE,
    edge_pen_width = E_PWIDTH,
)
```
{: .small }
</section>

<section>
## Use PROP_TO_SIZE
```
v_size_p = gt.prop_to_size(
    v_count_p,
    MI_V_SIZE,
    MA_V_SIZE,
)
...
gt.graph_draw(
    ...
    verted_size = v_size_p,
    edge_pen_width = e_pwidth_p,
)
```
{: .small }
* **Task 2:** Produce a diagram of [this graph](https://graph-tool.skewed.de/static/doc/_downloads/search_example.xml)
  - `g = gt.load_graph("search_example.xml")`
  - learn about its vertex and edge properties
  - have edge width scaled by `weight`
{: .small }
</section>

<section>
## Use FILL_COLOR
```
gt.graph_draw(
    ...
    vertex_fill_color = v_size_p,
)
```
</section>

</section>

<section>
<section>
# Analyze Graph
</section>
<section>
## Choose an [Algorithm](https://graph-tool.skewed.de/static/doc/modules.html)
* [**Search algorithms**](https://graph-tool.skewed.de/static/doc/search_module.html)
  * BFS search
* **Graph topology**
  * Shortest path, Connected components
* **Centrality measures**
  * PageRank, Betweenness, Closeness
* **Maximum flow algorithms**
* [**Community structures**](https://graph-tool.skewed.de/static/doc/demos/inference/inference.html)
* **Clustering coefficients**
{: .small }
</section>
<section>
## Centrality measures
* **Degree centrality**
  * Number of links incidend upon a node
  * "Immediate risk of taking a node out"
* {: fr } **Closeness centrality**
  * Sum of a node's distances to all other nodes
  * "Cost to spread information to all other nodes"
* {: fr } **Betweenness centrality**
  * Number of times a node acts as a bridge
  * "Control of a node on the communication between other nodes"
* {: fr } **Eigenvector centrality**
  * Influence of a node in a network
  * Google's PageRank is a variant of this measure
{: .small }
</section>
<section>
## Example cont'd
Choice of measure:
* {: fr } Centrality measures - Closeness centrality

**Goal:** Identify the people with shortest connection to all other people
</section>

<section>
## Calculate Closeness
```
e_icount_p = g.new_edge_property('int')
e_icount_p.a = e_count_p.a.max() - e_count_p.a

v_cl_p = closeness(g, weight=e_icount_p)

import numpy as np
v_cl_p_.a = np.nan_to_num(v_cl_p.a)
```
</section>

<section>
## Draw Closeness
```
v_cl_size_p = gt.prop_to_size(
    v_cl_p,
    MI_V_SIZE,
    MA_V_SIZE,
)
...
gt.graph_draw(
    ...
    vertex_fill_color = v_cl_size_p,
)
```
</section>

<section>
## On-the-fly Filtering
```
v_pck_p = g.new_vertex_property('bool')
v_pck_p.a = v_count_p.a > v_count_p.a.mean()

g.set_vertex_filter(v_pck_p)
# g.set_vertex_filter(None) # unset
```
{: .small }
* **Task:** Use the [graph filtering tutorial](https://graph-tool.skewed.de/static/doc/quickstart.html#graph-filtering) to create an example
</section>

<section>
## Top N
```
t10_idxs = v_count_p.a.argsort()[-10][::-1]

t1_idx   = t10_idxs[0]
t1_v	 = g.vertex(t1_idx)
t1_name  = v_name_p[t1_v]
t1_count = v_count_p[t1_v]
```
</section>

<section>
## SFDP Layout
* Scalable Force Directed Placement
* Fast, multilevel, force directed
```
gt.graph_draw(
    ...
    pos = gt.sfdplayout(g),
)
```
```
    ...
    pos = gt.sfdplayout(
        g, eweight=e_count_p
    ),
```
```
    ...
    pos = gt.sfdplayout(
        g,
        eweight=e_count_p,
        vweight=v_count_p
    ),
```
{: .small }
</section>

<section>
## FR Layout
```
gt.graph_draw(
    ...
    pos = gt.fruchterman_reingold_layout(g),
)

gt.graph_draw(
    ...
    pos = gt.fruchterman_reingold_layout(
        g, weight=e_count_p
    ),
)
```
</section>

<section>
## ARF Layout
* "[attractive and repulsive forces](https://arxiv.org/abs/0704.1748v5)"

```
gt.graph_draw(
    ...
    pos = gt.arf_layout(g),
)

gt.graph_draw(
    ...
    pos = gt.arf_layout(
        g, weight=e_count_p
    ),
)
```
</section>
</section>

<section>
# Links
* [Quick start](http://graph-tool.skewed.de/static/doc/quickstart.html)
* [Learn more about Graph object](http://graph-tool.skewed.de/static/doc/graph_tool.html)
* [Possible property value types](http://graph-tool.skewed.de/static/doc/graph_tool.html#graph_tool.PropertyMap)

</section>

<section>
# Graph analysis workflow
* Define problem in graphic form
* Clean the raw data
* Visualize to understand
* Choose proper algorithm for network feature extraction
* Filter data that interests you
* Visualize again to convince
</section>
