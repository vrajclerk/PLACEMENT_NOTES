# Kubernetes:
- Kubernetes is an distributed open-source technology which helps us in scheduling an executing application container within and across clusters

It consists of 2 type ogf resources:
1. Master Node:
   - It is the central node of the cluster which is responsible for managing all the activities in the cluster like scheduling applications,maintaining state,scaling app and rolling out new updates.
2. Worker Node:
   - It is the node which is responsible for running the application containers.

# Kubernetes Cluster:
- It is a group of master and worker nodes which work together to manage and run the application containers.
- `loosely coupled containers`: System is made up of independent parts that works together but aren't tightly coupled allows them to be more flexible.
- `Self Healing`: makes ssure that actual state matches the desired state by automatically fixing problem.
- `Uniform interface`: provides consistent way for userd to access and use resources.


# Pods:
- A pod is the basic execution unit in a Kubernetes cluster.
  
-  Pods are the smallest unit of objects that can be deployed on Kubernetes.
  
- Kubernetes packages one or more containers into a higher-level structure called a
 pod. Pod runs one level higher to the container.

<br>

## 1. How to do maintenance activity on the K8 node?

```
# moves the node to maintenance mode 
kubectl cordon

# discard the pod from the node
kubectl drain –ignore-daemon set
```

<br>

## 2. How do we control the resource usage of POD?

- with the use of `limit` and `Request`.

  1. `Request`: defines the minimum amount of CPU and memory a container needs to run.If a container exceeds its request for resources, it can be throttled back down to its request.
   
  2. `limits`: defines maximum amount of CPU and memory a container can use. If it tries to exceed this predefined limit it can be terminated

<br>

## 3. Various K8's services running on nodes:

### 1. Executer Services(worker):
   
   -  ### `kube-proxy`  : 
         This service is responsible for the communication of pods within the cluster and to the outside network, which runs on every node. 

        > This service is responsible to maintain network protocols when your pod establishes a network communication.

   - ### `kubelet` :
        > This service is responsible for the management of the node and the pods running on it.
        
        > **It is an agent that runs on every node in the cluster.**

        - Ensures that containers are running on a pod as specified.
        - Communicates with master nodes to receive instructions nd report node's status.
        - Manages lifecycle of pods,includinfd starting and stopping of containers.

  - ### `Container runtime`
  <br>

### 2. Master node Services:

- ### `Kube-apiserver`:
  - Master API service which acts as an entry point to K8 cluster.(Gate Keeper) means only authenticated requests can get through te cluster.
 
  - All the admin tasks & communication with cluster is done through this.
  
  <br>

- `Kube-scheduler`: Schedule PODs according to available resources on executor
 nodes.
- `Kube-controller-manager`:  
  - is a control loop that watches the shared state of the
 cluster through the apiserver and makes changes by attempting to move the
 current state towards the desired stable state.

   1.  `Node controller`: Responsible to respond when any node goes down.
   2.  `Replication`: ensures that request to maintain correct count of replica of any pod deployments are taken care.
   3.  `Endpoints`:   
    4. `Service controller`: ensures that service is always available and accessible.

- ### `etcd`:
  - etcd is a distributed key-value store that stores the cluster state & configuration data.

<br>

## 4. role of load balancer in kubernetes:
- Load balancing is a way to distribute the incoming traffic into multiple backend
 servers(pods), which is useful to ensure the application available to the users even if any pod goes down.

![alt text](<images/inage-7.png>)
 <br>

 ## 5. How to monitor the Kubernetes cluster?
 - Prometheus is used for Kubernetes monitoring. The Prometheus ecosystem consists
 of multiple components.
    - Mainly Prometheus server which scrapes and stores time-series data.
    - Client libraries for instrumenting application code.
    - Push gateway for supporting short-lived jobs.
    - Special-purpose exporters for services like StatsD, HAProxy, Graphite, etc.
    - An alert manager to handle alerts on various support tools.

<br>

## 6. Why use namespaces?
- While using the default namespace alone, it becomes hard over time to get an
 overview of all the applications you can manage in your cluster.
- Namespaces are a way to divide cluster resources between multiple users or teams.
  