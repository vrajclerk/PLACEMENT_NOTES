# Kubernetes

- Kubernetes is an open-source container orchestration system for automating the deployment, scaling, and management.
  
- It was originally designed by Google, and is now maintained by the Cloud Native Computing Foundation (CNCF).
  
-  Kubernetes provides a framework for deploying and managing containerized applications, and supports a wide range of containers including Docker, rkt, and others.
  
- It is designed to be highly scalable and fault-tolerant, and can run on a variety of platforms, including on-premises, cloud, and hybrid environments.

## General terms for kubernetes

### `minikube`
- Minikube is an open-source tool that allows developers to run a Kubernetes cluster locally on their computer. 
  
- It's a lightweight, single-node cluster that's designed to help developers learn and test Kubernetes features without the need to set up and maintain a full-fledged cluster. 

<br>

<h3> 

`kubbctl helps to interact with the control plane and to work with worker nodes. ` </h3>

<br>

## ConfigMaps:

### `ConfigMaps`: Used for non-sensitive data, such as configuration data. ConfigMaps store data as key-value pairs.
>  Pods can consume ConfigMaps as environment variables, command-line arguments, or as configuration files in a volume.

>A ConfigMap allows you to decouple environment-specific configuration from your container images, so that your applications are easily portable. 

<br>

### `Secrets`: Used for storing sensitive data, such as passwords, API keys, OAuth tokens, and Secure Shell (SSH) keys. Secrets store data as base64-encoded data for an additional layer of security.

### `Nodeport` :
- NodePort is a Kubernetes service that allows applications to be accessed from outside the cluster by opening ports on each node in the cluster.
  
-  It's useful for exposing pods to external traffic, and is often used for testing and demos. 
  
-  However, it's not recommended for production environments because of security, scalability, and load balancing concerns. 
  

## Deployments
- A Deployment manages a set of Pods to run an application workload, usually one that doesn't maintain state.
   
- It can be used to manage multiple versions of an application, and can be used to roll out new versions of an application.

- You describe a desired state in a Deployment, and the Deployment Controller changes the actual state to the desired state at a controlled rate. You can define Deployments to create new ReplicaSets, or to remove existing Deployments and adopt all their resources with new Deployments.

<br>

## Service:

- A Kubernetes Service is a logical abstraction that groups a set of Pods into a single resource, and defines how to access them:
  
  1. `Grouping`: A Service groups a set of Pods that perform the same function, such as web services or image processing. 
   
  2. `Naming`: A Service assigns a name and unique IP address to the group of Pods.
   
  3. `Access`: A Service defines policies for how to access the Pods.
   
  4. `Load balancing`: A Service distributes traffic evenly across the selected Pods.

- A Service is a method for exposing a network application that is running as one or more Pods in your cluster.

- A key aim of Services in Kubernetes is that you don't need to modify your existing application to use an unfamiliar service discovery mechanism. You can run code in Pods, whether this is a code designed for a cloud-native world, or an older app you've containerized. You use a Service to make that set of Pods available on the network so that clients can interact with it. 


## Deamon:
- A DaemonSet is a Kubernetes object that ensures a copy of a Pod is running on every node
- You can use DaemonSets for tasks like: Monitoring nodes, Collecting logs, Running a network proxy, and Backing up node data.