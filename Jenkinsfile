pipeline {
    agent any

    stages {
     
        stage('Build') {
            steps {
                sh '''
                mkdir -p build
                cmake -S game/ -B build/
                cmake --build build/
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
