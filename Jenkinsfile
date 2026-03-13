pipeline {
    agent any
    environment {
        DOCKER_IMAGE = "my-app-image:latest"
    }
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/youruser/your-repo.git'
            }
        }
        stage('Build & Test') {
            steps {
                sh 'npm install'
                sh 'npm test'
            }
        }
        stage('Docker Build') {
            steps {
                sh "docker build -t ${DOCKER_IMAGE} ."
            }
        }
        stage('Deploy to Minikube') {
            steps {
                sh "kubectl apply -f k8s/deployment.yaml"
            }
        }
    }
}
