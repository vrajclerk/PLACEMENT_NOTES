# Docker 

## 1. What is Container?

- Docker container is lightweight ,standalone and executable package that includes everything needed to run a software including code,libraries, runtime, system tools and settings etc..

- docker containers consist of applications and all their dependencies.They share the kernel and system resources with other containers and run asisolated systems in the host operating system.

-  Containers are created from images, which are essentially templates that define the environment and settings for a container.

### Key Features:
>- **Lightweight**: Containers are much lighter than virtual machines, as they share the host operating system.
  
>- **Isolation** : Containers encapsulate an application and its dependencies, helps prevent conflicts between different software versions and dependencies.

>- **Scalability and Modularity**: Applications can be broken down into smaller, manageable microservices, each running in its own container. This modularity simplifies scaling specific parts of an application independently based on demand.

>- **portability** 

### Use Cases :
>1. **Development and Testing**: 
Containers provide a consistent and reliable environment for developers to work in, ensuring.

> 2. **Continuous Integration/Continuous Deployment (CI/CD)**:
Automate the building, testing, and deployment of applications within containers to streamline the software release process.

<br>

## 2. Docker Container:
- Docker images are read-only templates that contain the instructions for creating a Docker container.

<br>

## 3. DockerFile

- It is a text file that has all commands which need to be run for building a given image.

<br>

## 4. Hypervisor

- A hypervisor plays a crucial role in enabling virtualization, allowing multiple virtual machines to run on a single physical machine. It helps improve resource utilization, flexibility, and isolation, making it indispensable in modern IT infrastructure, especially in data centers, cloud environments, and development environments.

> ### Types Of Hypervisor
>1. **Naive** :This type is also called a Bare-metal Hypervisor and runs
 directly on the underlying host system which also ensures direct access to the host hardware which is why it does not require base OS.

 >2. **Hosted Hypervisor**: This type makes use of the underlying host operating system which has the existing OS installed.

<br>

## 5. Docker Compose
- It is a YAML file consisting of all the details regarding various services, networks, and
 volumes that are needed for setting up the Docker-based application. 

 - So, docker compose is used for creating multiple containers, host them and establish
 communication between them. For the purpose of communication amongst the
 containers, ports are exposed by each and every container.

 
 ### Key Concepts of Docker Compose:

>1. <u>**Multi-Container Applications**:</u>
Compose allows you to manage multiple Docker containers that work together to form a complete application. Each container represents a service, such as a web server, database, or message queue.


>2. <u>**Declarative Configuration**:</u>
The services, networks, and volumes are declared in a docker-compose.yml file. This makes it easy to define the relationships between services and how they should be orchestrated.

>3. <u>**Easy Management**:></u>
With a single command, you can build, start, stop, or scale all services defined in the docker-compose.yml file, making it easier to manage complex applications.

>4. <u>**Networking**:</u>
Compose automatically sets up a network between the containers so that they can communicate with each other. Containers within the same network can reach each other by their service name.

>5. <u>**Volume Management**:</u>
It handles the persistence of data using volumes, so you can easily store and share data across containers.

<br>

## 10.  How many Docker components are there?

 - There are three docker components, they are - Docker Client, Docker Host, and
 Docker Registry.
 > 1. <u>**Docker Client**</u>: This component performs “build” and “run” operations for the
 purpose of opening communication with the docker host.

 >2. <u>**Docker Host**</u>: This component has the main docker daemon and hosts
 containers and their associated images. The daemon establishes a connection
 with the docker registry.

 >3. <u>**Docker Registry**</u>: This component stores the docker images. There can be a
 public registry or a private one. The most famous public registries are Docker
 Hub and Docker Cloud.



